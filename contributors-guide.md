# Kea Contributor's Guide

So you found a bug in Kea or plan to develop an extension and want to send us a patch? Great! This page will explain how to contribute your changes smoothly.


## Writing a patch

Before you start working on a patch or a new feature, it is a good idea to discuss it first with Kea developers. 
You can post your questions to the [kea-dev](https://lists.isc.org/mailman/listinfo/kea-dev) or 
[kea-users](https://lists.isc.org/mailman/listinfo/kea-users) mailing lists. The kea-users is intended for users
who are not interested in the internal workings or development details of Kea: it is OK to ask for feedback 
regarding new design or the best proposed solution to a certain problem. This is the best place to get user's
feedback. The internal details, questions about the code and its internals are better asked on kea-dev.

OK, so you have written a patch? Great! Before you submit it, make sure that your code compiles. This may
seem obvious, but there's more to it. You have surely checked that it compiles on your system, but Kea is 
portable software. Besides Linux, it is compiled and used on relatively uncommon systems like OpenBSD. Will 
your code compile and work there? What about endianness? It is likely that you used a regular x86 architecture 
machine to write your patch, but the software is expected to run on many other architectures. You may take
a look at [system specific build notes](https://kb.isc.org/docs/installing-kea). For a complete list of
systems we build on, you may take a look at the [Jenkins build farm report](https://jenkins.isc.org/view/Kea_BuildFarm/).

Does your patch conform to [Kea coding guidelines](https://gitlab.isc.org/isc-projects/kea/wikis/coding-guidelines)? 
You can submit a patch that does not adhere to them, but that will reduce its chances of being accepted. 
If the deviations are minor, one of the Kea engineers who does the review will likely fix the issues. 
However, if there are lots of issues, the reviewer may simply reject the patch and ask you to fix it before re-submitting.

## Running unit-tests

One of the ground rules in Kea development is that every piece of code has to be tested. We now have an 
extensive set of unit-tests for almost every line of code. Even if you are fixing something small, like a 
single line fix, you are encouraged to write unit-tests for that change. That is even more true for new code:
if you write a new function, method or a class, you definitely should write unit-tests for it.

To ensure that everything is tested, ISC uses a development method called Test Driven Development (TDD). In 
TDD, a feature is developed alongside the tests, with the tests being written first. In detail, a test is 
written for a small piece of functionality and run against the existing code. (In the case where the test is
a unit test for a function, it would be run against an empty (unimplemented) function.) The test should fail.
A minimal amount of code is then written, just enough to get the test to pass. Then the process is repeated for
the next small piece of functionality. This continues until all the functionality has been implemented.

This approach has two advantages:

 -  By writing a test first and then only enough code to pass the test, that code is fully tested. By repeating
    this process until the feature is fully implemented, all the code gets test coverage. You avoid the situation
    where not enough tests have been written to check all the code.
 -  By running the test before the code implementing the function is written and observing the test fail, you can 
    detect the situation where a bug in the test code will cause it to pass regardless of the code being tested.

Initially, some people unfamiliar with that approach react with "but my change is simple and I tested that it 
works". That approach is both insufficient and short-sighted. It is insufficient, because manual testing is by
definition laborious and can't really be done on the multitude of systems we run Kea on. It is short-sighted, 
because even with your best intentions you will not be able to dedicate any significant amount of time for repeated
testing of your improved code. The old ISC DHCP has two decades of history behind it and we hope to make Kea last
similar time span. Over such long periods, code tends to be refactored several times. The change you made may be
affected by some other change or by the code that hasn't been written yet.

See Building Kea with Unit Tests for instructions on how to run unit-tests. If you happen to touch any database
related code, make sure you compile your code with –with-mysql, –with-pgsql and/or –with-cql as needed. For example,
if you change something substantial, make sure the other compilation options still work.

If you happen to add new files or have modified any Makefile.am files, it is also a good idea to check if you haven't 
broken the distribution process:

```bash
make distcheck
```

There are other useful switches which can be passed to configure. It is always a good idea to use `–enable-logger-checks`,
which does sanity checks on logger parameters. Use `–-enable-debug` to enable various additional consistency checks
that reduce performance but help during development. If you happen to modify anything in the documentation, use
`–-enable-generate-docs`. If you are modifying DHCP code, you are likely to be interested in enabling a non-default
database backends for DHCP. Note that if the backend is not enabled, the database-specific unit-tests are skipped.
To enable the MySQL backend, use the switch `–with-mysql`; for PostgreSQL, use `–with-pgsql` and for Cassandra use
`--with-cql`. A complete list of all switches can be obtained with the command:

```bash
./configure --help
```

## Merge Request (also known as sending your patch the right way)

The first step in writing the patch or new feature should be to get the source code from our Git repository. 
The procedure is very easy and is [explained here](https://gitlab.isc.org/isc-projects/kea/wikis/gitlab-howto).
While it is possible to provide a patch against the latest stable release, it makes the review process much
easier if it is for latest code from the Git master branch.

Since you won't get write access to the Kea repository, you should fork it and then commit your changes to
your own repo. How you organize the work depends entirely on you, but it seems reasonable to create a branch
rather than working on your master. Once the code on your branch and feel its ready

Once you feel that your patch is ready, please commit your changes and push it to your copy of Kea repo.
Then go to Kea project and [submit a Merge Request](https://gitlab.isc.org/isc-projects/kea/merge_requests/new).

If you can't access this link or don't see New Merge Request button on the [merge requests page](https://gitlab.isc.org/isc-projects/kea/merge_requests), 
please ask on kea-dev and someone will help you out.

## Send Pull Request on github
If you can't send the patch on gitlab, the next best preferred way is to send pull request (PR) on [github](https://github.com/isc-projects/kea).

This is almost as good as sending MR on gitlab. The downside is that Kea devs don't look at github too frequently,
so it may be a while until we notice it. And when we do, the chances are we will be busy with other things. With
gitlab, your MR will stare at us the whole time, so we'll get round to it much quicker. But we understand that there
are some cases where people may prefer github over gitlab.

See the excellent documentation on github: https://help.github.com/articles/creating-a-pull-request/ for details. 
\In essence, you need github account (spam/hassle free, takes one minute to set up). Then you can fork the Kea 
repository, commit changes to your repo and ask us to pull your changes into official Kea repository. This has a
number of advantages. First, it is made against a specific code version, which can be easily checked with git log
command. Second, this request pops up instantly on our list of open pull requests and will stay there. The third
benefit is that the pull request mechanism is very flexible. Kea engineers (and other users, too) can comment on
it, attach links, mention other users etc. You as a submitter can augment the patch by committing extra changes
to your repository. Those extra commits will appear instantly in the pull request. This is really useful during
the review. Finally, ISC engineers can better assess all open pull requests and add labels to them, such as
"enhancement", "bug", or "unit-tests missing". This makes our life easier. Oh, and your commits will later be shown
as yours in github history. If you care for that kind of things, once the patch is merged, you'll be automatically
listed as contributor and Kea will be listed as project you have contributed to.

## If you really can't do MR on gitlab or PR on github...

Well, you are out of luck. There are other ways, but those are really awkward and the chances of your patch
being ignored are really high. Anyway, here they are:

- Create a ticket in the Kea Gitlab (https://gitlab.isc.org/isc-projects/kea) and attach your patch to it. Sending
  a patch has a number of disadvantages. First, if you don't specify the base version against which it was created,
  one of ISC engineers will have to guess that or go through a series of trials and errors to find that out. If the
  code doesn't compile, the reviewer will not know if the patch is broken or maybe it was applied to incorrect base
  code. Another frequent problem is that it may be possible that the patch didn't include any new files you have added.
  If we happen to have any comments that you as submitter are expected to address (and in the overwhelming majority of
  cases, we have), you will be asked to send an updated patch. It is not uncommon to see several rounds of such reviews,
  so this can get very complicated very quickly. Please don't add your ticket to any milestone. Kea team has a process 
  of going through tickets unassigned to any milestone.sure your ticket is created in the default milestone
  "kea-proposed". ISC engineers review new tickets once a week and assign them to specific milestones. Please do not add tickets to working milestones directly. Having a ticket in trac ensures that the patch will never be forgotten and it will show up on our trac reports. It's not required, but much appreciated if you send a short note to the kea-dev mailing list explaining what you did with the code and announce the ticket number.
    Send a patch to the kea-dev list. This is the third preferred method, if you can't or don't want to use github and trac for whatever reason. If you send a patch to a mailing list in a wrong time, e.g. shortly before a release, ISC engineers may miss it or perhaps they will see it and then forget about it. Nevertheless, it is still doable and we successfully accepted patches that way. It just takes more time from everyone involved, so it's a slower process in general.
    Send a tarball with your modified code. This is really the worst way one can contribute a patch. It has a number of disadvantages. In particular, someone will need to find out which version the code was based on and generate the patch. It's not a rocket science, but it may be a very mundane thing to do if the ISC engineer does not know the version in advance. The mailing list has a limit on the message size (for good reasons), so you'll likely need to upload it somewhere first. ISC engineers often don't pick up new tickets instantly, so it may have to wait weeks before the tarball is looked at. The tarball does not benefit from most of the advantages mentioned for github, like the ability to easily update the code, have a meaningful discussion or see what the exact scope of changes are. Nevertheless, if we given a choice of getting a tarball or not getting a patch at all, we prefer tarballs. Just keep in mind that processing a tarball is really cumbersome for ISC engineers, so it may take significantly longer than other ways.

## Going through a review

Once you let us submitted a patch using one of the ways above, the action is on one of the ISC engineers. First, we will need either a trac ticket or PR on github. We prefer the original submitter fill them as he or she has the best understanding of the purpose of the change and may have any extra information, e.g. "this patch fixes compilation issue on FreeBSD 10.1". If there there is no PR and no trac ticket, we will create one. Depending on the subjective importance and urgency as perceived by the ISC engineer, the ticket or PR will be assigned to one of the milestones.

Sooner or later, one of ISC engineers will do the review. Here's the tricky part. One of Kea developers will review your patch, but it may not happen immediately. Unfortunately, developers are usually working under a tight schedule, so any extra unplanned review work may take a while sometimes. Having said that, we value external contributions very much and will do whatever we can to review patches in a timely manner. Don't get discouraged if your patch is not accepted after first review. To keep the code quality high, we use the same review processes for external patches as we do for internal code. It may take some cycles of review/updated patch submissions before the code is finally accepted. The nature of the review process is that it emphasizes areas that need improvement. If you are not used to the review process, you may get the impression that the feedback is negative. It is not: even the Kea developers seldom see reviews that say "All OK please merge".

Once the process is almost complete, the developer will likely ask you how you would like to be credited. The typical answers are by first and last name, by nickname, by company name or anonymously. Typically we will add a note to the ChangeLog and also set you as the author of the commit applying the patch and update the contributors section in the AUTHORS file. If the contributed feature is big or critical for whatever reason, it may also be mentioned in release notes.

Sadly, we sometimes see patches that are submitted and then the submitter never responds to our comments or requests for an updated patch. Depending on the nature of the patch, we may either fix the outstanding issues on our own and get another ISC engineer to review them or the ticket may end up in our "Outstanding Tasks" milestone. When a new release is started, we go through the tickets in Outstanding Tasks, select a small number of them and move them to whatever the current milestone is. Keep that in mind if you plan to submit a patch and forget about it. We may accept it eventually, but it's much, much faster process if you participate in it.
Extra steps

If you are interested in knowing the results of more in-depth testing, you are welcome to visit the ISC Jenkins page: https://jenkins.isc.org This is a live result page with all tests being run on various systems. Besides basic unit-tests, we also have reports from valgrind (memory debugger), cppcheck and clang-analyzer (static code analyzers), Lettuce system tests and more. Although it is not possible for non ISC employees to run tests on that farm, it is possible that your contributed patch will end up there sooner or later. We also have ISC Forge tests running, but currently the test results are not publicly available.

MasterDetailController
======================

A master detail controller that works like the facebook sliding menu/view

You need to provide a master controller and detail controller. These controllers should subclass UIViewController and provide a view.

in AppDelegate application:didFinishLaunchingWithOptions: set MasterDetailViewController as rootview.

  UIViewController *master = [[UIViewController alloc] initWithNibName:@"MasterView" bundle:nil];
  DetailViewController *detail = [[DetailViewController alloc] initWithNibName:@"DetailView" bundle:nil];

  self.viewController = [[[MasterDetailController alloc] initWithMasterViewController:master detailViewController:detail] autorelease];
  self.window.rootViewController = self.viewController;

//
//  ViewController.h
//  MasterDetailview
//
//  Created by Rasmus Styrk on 8/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * Provides a master and detail view where the detail view can 
 * be slided to the side to show the master view
 *
 */
@interface MasterDetailController : UIViewController

/**
 * Inits the control with a masterController and a detailController. These two controllers's view will be added as subviews.
 *
 * @param UIViewController masterController The controller that provides a master view
 * @param UIViewController detailController A Controller that provides a detail view
 */
- (id) initWithMasterViewController:(UIViewController*)masterController detailViewController:(UIViewController*)detailController;

/**
 * Toggles master view to show/hide.
 *
 */
- (void) toggleMasterView;

/**
 * Changes the detail view with a new controller
 *
 * @param UIViewController The new detail controller tthat sould be loaded. The olds detail view will be removed from superview.
 */
- (void) changeDetailView:(UIViewController*) detailController;

@end

//
//  IASKSpecifierValuesViewController.h
//  http://www.inappsettingskit.com
//
//  Copyright (c) 2009:
//  Luc Vandal, Edovia Inc., http://www.edovia.com
//  Ortwin Gentz, FutureTap GmbH, http://www.futuretap.com
//  All rights reserved.
// 
//  It is appreciated but not required that you give credit to Luc Vandal and Ortwin Gentz, 
//  as the original authors of this code. You can give credit in a blog post, a tweet or on 
//  a info page of your app. Also, the original authors appreciate letting them know if you use this code.
//
//  This code is licensed under the BSD license that is available at: http://www.opensource.org/licenses/bsd-license.php
//

#import <UIKit/UIKit.h>

@class IASKSpecifier;
@class IASKSettingsReader;

@interface IASKSpecifierValuesViewController : UIViewController 

@property (nonatomic, retain) NSIndexPath *checkedItem;
@property (nonatomic, retain) IASKSpecifier *currentSpecifier;
@property (nonatomic, retain) IASKSettingsReader *settingsReader;
@property (nonatomic, retain) IBOutlet UITableView *tableView;

@end

//
//  HelpCategoryStepTVC.h
//  
//
//  Created by Andrea Sponziello on 05/10/2017.
//
//

#import <UIKit/UIKit.h>

@class HelpCategory;
@class HelpDepartment;

@interface HelpCategoryStepTVC : UITableViewController

@property (strong, nonatomic) NSMutableDictionary *context;

@property (strong, nonatomic) NSArray<HelpDepartment *> *departments;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *cancelButton;

- (IBAction)cancelAction:(id)sender;

@end

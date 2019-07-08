//
//  FCPrefTableViewController.m
//  pubc
//
//  Created by Kevin Bradley on 6/21/19.
//  Copyright © 2019 nito llc. All rights reserved.
//

#import "FCPrefTableViewController.h"
#import "FCControllerManager.h"
#import "FCControlListTableViewController.h"
@interface FCPrefTableViewController ()

@end

@implementation FCPrefTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //[self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"Cell"];
    
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
      self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(close)];
}

- (void)close {
    
    [self dismissViewControllerAnimated:true completion:nil];
}


#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    return 14;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    
    FCControllerManager *shared = [FCControllerManager sharedManager];
    NSDictionary *gpd = [shared controllerPreferences];

        NSString *key = [self keyForRow:indexPath.row];
        NSLog(@"key: %@", key);
        NSString *value = gpd[key];
         NSLog(@"value: %@", value);
        FCControlListTableViewController *controller = [[FCControlListTableViewController alloc] initWithOriginalValue:value keyValue:key];
        [self.navigationController pushViewController:controller animated:true];
        
    
        
        
    
}

- (NSString *)keyForRow:(NSInteger)row {
    
    NSString *keyValue = nil;
    
    switch (row) {
        case 0: //ButtonA
            keyValue = ButtonA;
            break;
            
        case 1: //ButtonB
            keyValue = ButtonB;
            break;
            
        case 2: //ButtonX
            
            keyValue = ButtonX;
            break;
            
        case 3: //ButtonY
            
            keyValue = ButtonY;
            break;
            
        case 4: //LeftShoulder
            
            keyValue = LeftShoulder;
            break;
            
        case 5: //RightShoulder
            
            keyValue = RightShoulder;
            break;
            
        case 6: //LeftTrigger
            
            keyValue = LeftTrigger;
            break;
            
        case 7: //RightTrigger
            
            keyValue = RightTrigger;
            break;
            
        case 8: //LeftThumbstickButton
            
            keyValue = LeftThumbstickButton;
            break;
            
        case 9: //RightThumbstickButton
            
            keyValue = RightThumbstickButton;
            break;
            
        case 10: //Dpad.up
            
            keyValue = DpadUp;
            break;
            
        case 11: //Dpad.down
            
            keyValue = DpadDown;
            break;
            
        case 12: //Dpad.left
            
            keyValue = DpadLeft;
            break;
            
        case 13: //Dpad.right
            
            keyValue = DpadRight;
            break;
            
        default:
            break;
    }
    
    return keyValue;
}
- (void)configureCell:(UITableViewCell *)cell forRow:(NSInteger)row {
 
    NSDictionary *gpd = [[FCControllerManager sharedManager] controllerPreferences];
    //NSLog(@"controllerPreferences: %@", gpd);
    
    switch (row) {
        case 0: //ButtonA
            cell.textLabel.text = @"Button A";
            cell.detailTextLabel.text = gpd[ButtonA];
            break;
            
        case 1: //ButtonB
            cell.textLabel.text = @"Button B";
            cell.detailTextLabel.text = gpd[ButtonB];
            break;
            
        case 2: //ButtonX
            
            cell.textLabel.text = @"Button X";
            cell.detailTextLabel.text = gpd[ButtonX];
            break;
            
        case 3: //ButtonY
            
            cell.textLabel.text = @"Button Y";
            cell.detailTextLabel.text = gpd[ButtonY];
            break;
            
        case 4: //LeftShoulder
            
            cell.textLabel.text = @"L1 (Left Shoulder)";
            cell.detailTextLabel.text = gpd[LeftShoulder];
            break;
            
        case 5: //RightShoulder
            
            cell.textLabel.text = @"R1 (Right Shoulder)";
            cell.detailTextLabel.text = gpd[RightShoulder];
            break;
            
        case 6: //LeftTrigger
            
            cell.textLabel.text = @"L2 (Left Trigger)";
            cell.detailTextLabel.text = gpd[LeftTrigger];
            break;
            
        case 7: //RightTrigger
            
            cell.textLabel.text = @"R2 (Right Trigger)";
            cell.detailTextLabel.text = gpd[RightTrigger];
            break;
            
        case 8: //LeftThumbstickButton
            
            cell.textLabel.text = @"L3 (Left Thumbstick Button)";
            cell.detailTextLabel.text = gpd[LeftThumbstickButton];
            break;
            
        case 9: //RightThumbstickButton
            
            cell.textLabel.text = @"R3 (Right Thumbstick Button)";
            cell.detailTextLabel.text = gpd[RightThumbstickButton];
            break;
            
        case 10: //Dpad.up
            
            cell.textLabel.text = @"D-Pad Up";
            cell.detailTextLabel.text = gpd[DpadUp];
            break;
            
        case 11: //Dpad.down
            
            cell.textLabel.text = @"D-Pad Down";
            cell.detailTextLabel.text = gpd[DpadDown];
            break;
            
        case 12: //Dpad.left
            
            cell.textLabel.text = @"D-Pad Left";
            cell.detailTextLabel.text = gpd[DpadLeft];
            break;
            
        case 13: //Dpad.right
            
            cell.textLabel.text = @"D-Pad Right";
            cell.detailTextLabel.text = gpd[DpadRight];
            break;
        default:
            break;
    }
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    
}

- (void)viewWillAppear:(BOOL)animated {
 
    [super viewWillAppear:animated];
    
    [self.tableView reloadData];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    static NSString *CellIdentifier = @"CellIdentifier";
    
    UITableViewCell *cell = (UITableViewCell *)[tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    
    if (!cell)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:CellIdentifier];
    }
    // Configure the cell...
    [self configureCell:cell forRow:indexPath.row];
    
    return cell;
}



@end

//
//  ViewController.h
//  Web Services
//
//  Created by Walter Gonzalez Domenzain on 15/07/16.
//  Copyright © 2016 UAG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebServices.h"
#import "Declarations.h"


@interface Home : UIViewController
@property (strong, nonatomic) IBOutlet UIButton *btnLoad;
@property (strong, nonatomic) IBOutlet UILabel *lblCityValue;
@property (strong, nonatomic) IBOutlet UILabel *lblTempValue;
@property (strong, nonatomic) IBOutlet UILabel *lblPressureValue;
@property (strong, nonatomic) IBOutlet UILabel *lblHumidityValue;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMinValue;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMaxValue;
@property (strong, nonatomic) IBOutlet UILabel *lblSeaLevelValue;
@property (strong, nonatomic) IBOutlet UILabel *lblGroundLevel;
@property (strong, nonatomic) IBOutlet UIView *vMap;


@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityLoad;
@property (strong, nonatomic) IBOutlet UITextField *txtLatitude;
@property (strong, nonatomic) IBOutlet UITextField *txtLongitude;

- (IBAction)btnLoadPressed:(id)sender;

@end


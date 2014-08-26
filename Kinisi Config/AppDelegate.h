//
//  AppDelegate.h
//  Kinisi Config
//
//  Created by Trevor Erik Carlson on 8/27/14.
//  Copyright (c) 2014 Kinisi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreBluetooth/CBService.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, CBCentralManagerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CBCentralManager *centralmanager;
@property (nonatomic) BOOL centralmanagerready;

@end

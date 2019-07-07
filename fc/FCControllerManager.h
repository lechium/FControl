//
//  FCControllerManager.h
//  pubc
//
//  Created by Kevin Bradley on 6/15/19.
//  Copyright © 2019 nito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FCDefines.h"
#import <GameController/GameController.h>

@interface FCControllerManager : NSObject

@property (nonatomic, strong) GCController *gameController;
@property (nonatomic, strong) NSDictionary *gamePlayDictionary;

- (UIViewController *)topViewController;
- (UIView *)IOSView;
- (CGPoint)convertPointForScreen:(CGPoint)inputPoint;
- (CGPoint)pointForActionType:(FCActionType)type;
- (NSDictionary *)controllerPreferences;
- (FCActionType)actionTypeFromConstant:(NSString *)constant;
- (FCActionType)actionTypeForControllerButton:(NSString *)constantString;
+ (id)sharedManager;
- (void)listenForControllers;
- (void)updateGamplayValue:(id)value forKey:(NSString *)theKey;
@end



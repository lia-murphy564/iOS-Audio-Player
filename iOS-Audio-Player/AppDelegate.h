//
//  AppDelegate.h
//  iOS-Audio-Player
//
//  Created by Amelia Murphy on 9/28/21.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


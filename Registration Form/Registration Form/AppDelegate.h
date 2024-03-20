//
//  AppDelegate.h
//  Registration Form
//
//  Created by XTSW-MAC-1137-2 on 14/03/24.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


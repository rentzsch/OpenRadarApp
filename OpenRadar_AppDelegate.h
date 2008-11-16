//
//  OpenRadar_AppDelegate.h
//  OpenRadar
//
//  Created by wolf on 11/15/08.
//  Copyright Red Shed Software Company 2008 . All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface OpenRadar_AppDelegate : NSObject
{
    IBOutlet NSWindow *window;
    IBOutlet NSTextField *addressField;
    IBOutlet WebView *webView;
    NSMutableDictionary *formValues;
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
}

- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSManagedObjectModel *)managedObjectModel;
- (NSManagedObjectContext *)managedObjectContext;

- (IBAction)saveAction:sender;

@end

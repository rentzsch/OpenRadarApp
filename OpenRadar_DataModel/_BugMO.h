// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BugMO.h instead.

#import <CoreData/CoreData.h>



@interface BugMOID : NSManagedObjectID {}
@end

@interface _BugMO : NSManagedObject {}
+ (id)newInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (BugMOID*)objectID;



- (NSString*)productVersion;
- (void)setProductVersion:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *productVersion;
#endif

//- (BOOL)validateProductVersion:(id*)value_ error:(NSError**)error_;



- (NSDate*)creationDate;
- (void)setCreationDate:(NSDate*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSDate *creationDate;
#endif

//- (BOOL)validateCreationDate:(id*)value_ error:(NSError**)error_;



- (NSString*)details;
- (void)setDetails:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *details;
#endif

//- (BOOL)validateDetails:(id*)value_ error:(NSError**)error_;



- (NSString*)product;
- (void)setProduct:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *product;
#endif

//- (BOOL)validateProduct:(id*)value_ error:(NSError**)error_;



- (NSString*)title;
- (void)setTitle:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *title;
#endif

//- (BOOL)validateTitle:(id*)value_ error:(NSError**)error_;



- (NSString*)reproducible;
- (void)setReproducible:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *reproducible;
#endif

//- (BOOL)validateReproducible:(id*)value_ error:(NSError**)error_;



- (NSString*)classification;
- (void)setClassification:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *classification;
#endif

//- (BOOL)validateClassification:(id*)value_ error:(NSError**)error_;



- (NSString*)radarNumber;
- (void)setRadarNumber:(NSString*)value_;
#if defined(MAC_OS_X_VERSION_10_5) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5
@property (retain) NSString *radarNumber;
#endif

//- (BOOL)validateRadarNumber:(id*)value_ error:(NSError**)error_;




@end

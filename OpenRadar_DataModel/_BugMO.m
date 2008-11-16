// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BugMO.m instead.

#import "_BugMO.h"

@implementation BugMOID
@end

@implementation _BugMO

+ (id)newInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	return [NSEntityDescription insertNewObjectForEntityForName:@"Bug" inManagedObjectContext:moc_];									 
}

- (BugMOID*)objectID {
	return (BugMOID*)[super objectID];
}




- (NSString*)productVersion {
	[self willAccessValueForKey:@"productVersion"];
	NSString *result = [self primitiveValueForKey:@"productVersion"];
	[self didAccessValueForKey:@"productVersion"];
	return result;
}

- (void)setProductVersion:(NSString*)value_ {
	[self willChangeValueForKey:@"productVersion"];
	[self setPrimitiveValue:value_ forKey:@"productVersion"];
	[self didChangeValueForKey:@"productVersion"];
}






- (NSDate*)creationDate {
	[self willAccessValueForKey:@"creationDate"];
	NSDate *result = [self primitiveValueForKey:@"creationDate"];
	[self didAccessValueForKey:@"creationDate"];
	return result;
}

- (void)setCreationDate:(NSDate*)value_ {
	[self willChangeValueForKey:@"creationDate"];
	[self setPrimitiveValue:value_ forKey:@"creationDate"];
	[self didChangeValueForKey:@"creationDate"];
}






- (NSString*)details {
	[self willAccessValueForKey:@"details"];
	NSString *result = [self primitiveValueForKey:@"details"];
	[self didAccessValueForKey:@"details"];
	return result;
}

- (void)setDetails:(NSString*)value_ {
	[self willChangeValueForKey:@"details"];
	[self setPrimitiveValue:value_ forKey:@"details"];
	[self didChangeValueForKey:@"details"];
}






- (NSString*)product {
	[self willAccessValueForKey:@"product"];
	NSString *result = [self primitiveValueForKey:@"product"];
	[self didAccessValueForKey:@"product"];
	return result;
}

- (void)setProduct:(NSString*)value_ {
	[self willChangeValueForKey:@"product"];
	[self setPrimitiveValue:value_ forKey:@"product"];
	[self didChangeValueForKey:@"product"];
}






- (NSString*)title {
	[self willAccessValueForKey:@"title"];
	NSString *result = [self primitiveValueForKey:@"title"];
	[self didAccessValueForKey:@"title"];
	return result;
}

- (void)setTitle:(NSString*)value_ {
	[self willChangeValueForKey:@"title"];
	[self setPrimitiveValue:value_ forKey:@"title"];
	[self didChangeValueForKey:@"title"];
}






- (NSString*)reproducible {
	[self willAccessValueForKey:@"reproducible"];
	NSString *result = [self primitiveValueForKey:@"reproducible"];
	[self didAccessValueForKey:@"reproducible"];
	return result;
}

- (void)setReproducible:(NSString*)value_ {
	[self willChangeValueForKey:@"reproducible"];
	[self setPrimitiveValue:value_ forKey:@"reproducible"];
	[self didChangeValueForKey:@"reproducible"];
}






- (NSString*)classification {
	[self willAccessValueForKey:@"classification"];
	NSString *result = [self primitiveValueForKey:@"classification"];
	[self didAccessValueForKey:@"classification"];
	return result;
}

- (void)setClassification:(NSString*)value_ {
	[self willChangeValueForKey:@"classification"];
	[self setPrimitiveValue:value_ forKey:@"classification"];
	[self didChangeValueForKey:@"classification"];
}






- (NSString*)radarNumber {
	[self willAccessValueForKey:@"radarNumber"];
	NSString *result = [self primitiveValueForKey:@"radarNumber"];
	[self didAccessValueForKey:@"radarNumber"];
	return result;
}

- (void)setRadarNumber:(NSString*)value_ {
	[self willChangeValueForKey:@"radarNumber"];
	[self setPrimitiveValue:value_ forKey:@"radarNumber"];
	[self didChangeValueForKey:@"radarNumber"];
}








@end

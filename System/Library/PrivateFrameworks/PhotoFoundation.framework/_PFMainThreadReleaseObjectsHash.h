/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFWeakContainer.h>

@interface _PFMainThreadReleaseObjectsHash : PFWeakContainer {

	id _objects[7];
	Class _objectsClasses[7];
	unsigned long long _releaseCounts[7];
	unsigned long long _objectCount;
	unsigned long long _lowIndex;
	unsigned long long _highIndex;

}
+(void)addDeferredReleaseObject:(id)arg1 ;
-(BOOL)isFull;
-(void)weakReferenceBecameNil;
-(void)addDeferredReleaseObject:(id)arg1 ;
-(void)processMainThreadReleases;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface IPAGeometryOperatorSequence : IPAGeometryOperator {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* map_identifierToOperator;
	NSMutableDictionary* map_identifierToIndex;
	NSMutableArray* _operators;

}
+(id)sequenceWithIdentifier:(id)arg1 ;
+(id)sequence;
-(id)transformForGeometry:(id)arg1 ;
-(BOOL)appendOperator:(id)arg1 ;
-(BOOL)replaceOperatorWithIdentifier:(id)arg1 withOperator:(id)arg2 ;
-(BOOL)removeOperatorWithIdentifier:(id)arg1 ;
-(id)subsequenceFrom:(id)arg1 to:(id)arg2 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
@end


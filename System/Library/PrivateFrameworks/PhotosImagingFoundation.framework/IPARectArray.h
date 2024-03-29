/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface IPARectArray : NSObject <NSCopying, NSMutableCopying> {

	RectArray* _imp;

}
+(id)rectArray;
+(id)rectArrayWithRect:(CGRect)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(void)enumerateRects:(/*^block*/id)arg1 ;
-(id)initWithRectArray:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
@end


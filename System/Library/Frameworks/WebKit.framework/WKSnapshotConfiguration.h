/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying> {

	NSNumber* _snapshotWidth;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                         //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSNumber * snapshotWidth;              //@synthesize snapshotWidth=_snapshotWidth - In the implementation block
-(NSNumber *)snapshotWidth;
-(void)setSnapshotWidth:(NSNumber *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
@end


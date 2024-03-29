/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTextItem.h>
@class NSString;


@protocol GEOTextItem
@property (nonatomic,readonly) NSString * primaryText; 
@required
-(NSString *)primaryText;

@end


@class NSString;

@interface GEOTextItem : NSObject <GEOTextItem> {

	NSString* _primaryText;

}

@property (nonatomic,readonly) NSString * primaryText;              //@synthesize primaryText=_primaryText - In the implementation block
-(NSString *)primaryText;
-(id)initWithPrimaryText:(id)arg1 ;
-(id)initWithTextItem:(id)arg1 ;
@end


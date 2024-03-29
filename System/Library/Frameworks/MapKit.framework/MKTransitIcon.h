/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitIconDataSource.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {

	unsigned _cartoID;
	unsigned _defaultTransitType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,readonly) unsigned cartoID;                         //@synthesize cartoID=_cartoID - In the implementation block
@property (nonatomic,readonly) unsigned defaultTransitType;              //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
-(long long)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(id)initWithCartoId:(unsigned)arg1 defaultTransitType:(unsigned)arg2 ;
@end


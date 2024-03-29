/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _x_props;
	int _classification;

}

@property (retain) NSDictionary * x_props;              //@synthesize x_props=_x_props - In the implementation block
@property (assign) int classification;                  //@synthesize classification=_classification - In the implementation block
+(id)metadataWithICSComponent:(id)arg1 ;
+(id)_whitelistedClassesForSecureCoding;
+(id)metadataWithData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setClassification:(int)arg1 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg1 ;
-(void)applyToComponent:(id)arg1 ;
-(void)setX_props:(NSDictionary *)arg1 ;
-(id)initWithICSComponent:(id)arg1 ;
-(NSDictionary *)x_props;
-(int)classification;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


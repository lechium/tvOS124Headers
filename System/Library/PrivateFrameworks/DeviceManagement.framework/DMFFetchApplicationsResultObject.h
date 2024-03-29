/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject {

	NSDictionary* _applicationsByIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * applicationsByIdentifier;              //@synthesize applicationsByIdentifier=_applicationsByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)applicationsByIdentifier;
-(id)initWithApplicationsByIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end


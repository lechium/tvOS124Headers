/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSSet, NSString;

@interface STPerson : STSiriModelObject <AFTranscriptionType> {

	NSSet* _contactHandles;
	NSString* _fullName;

}

@property (nonatomic,copy) NSSet * contactHandles;                  //@synthesize contactHandles=_contactHandles - In the implementation block
@property (nonatomic,copy) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSSet *)contactHandles;
-(void)setContactHandles:(NSSet *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentConfigurationMutating.h>

@class AFExperimentConfiguration, NSString, AFExperimentGroup, NSArray;

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating> {

	AFExperimentConfiguration* _baseModel;
	long long _type;
	NSString* _identifier;
	NSString* _version;
	AFExperimentGroup* _controlGroup;
	NSArray* _experimentGroups;
	NSString* _salt;
	struct {
		unsigned isDirty : 1;
		unsigned hasType : 1;
		unsigned hasIdentifier : 1;
		unsigned hasVersion : 1;
		unsigned hasControlGroup : 1;
		unsigned hasExperimentGroups : 1;
		unsigned hasSalt : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBaseModel:(id)arg1 ;
-(void)setControlGroup:(id)arg1 ;
-(void)setExperimentGroups:(id)arg1 ;
-(void)setSalt:(id)arg1 ;
-(id)generate;
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setVersion:(id)arg1 ;
@end


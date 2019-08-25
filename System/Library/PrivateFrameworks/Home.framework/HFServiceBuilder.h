/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@protocol HFIconDescriptor;
@class NSString, HFRoomBuilder, HMService, NSArray;

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	NSString* name;
	HFRoomBuilder* room;
	id<HFIconDescriptor> _iconDescriptor;
	NSString* _associatedServiceType;
	long long _configurationState;

}

@property (nonatomic,readonly) HMService * service; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;               //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,copy) NSString * associatedServiceType;                    //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (assign,nonatomic) long long configurationState;                      //@synthesize configurationState=_configurationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(HMService *)service;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(id<HFIconDescriptor>)iconDescriptor;
-(NSString *)originalName;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(NSArray *)availableIconDescriptors;
-(id)_lazilyUpdateIcon;
-(id)_lazilyUpdateDateAdded;
-(id)_lazilyUpdateAssociatedServiceType;
-(id)_lazilyUpdateConfigurationState;
-(HFRoomBuilder *)room;
-(id)accessories;
-(long long)configurationState;
-(void)setConfigurationState:(long long)arg1 ;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(NSString *)associatedServiceType;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
@end


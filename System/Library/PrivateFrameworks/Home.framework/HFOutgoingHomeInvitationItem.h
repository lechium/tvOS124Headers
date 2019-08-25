/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMOutgoingHomeInvitation, NSString;

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMOutgoingHomeInvitation* _outgoingInvitation;

}

@property (nonatomic,readonly) HMOutgoingHomeInvitation * outgoingInvitation;              //@synthesize outgoingInvitation=_outgoingInvitation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(id)initWithOutgoingInvitation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


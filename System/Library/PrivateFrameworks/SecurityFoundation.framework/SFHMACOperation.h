/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {

	id _hmacOperationInternal;

}

@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
-(id<SFDigestOperation>)digestOperation;
-(id)initWithDigestOperation:(id)arg1 ;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


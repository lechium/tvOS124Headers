/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	BOOL _shouldCopy;
	BOOL _tryDeltaCopy;
	NSURL* _transferPath;

}

@property (nonatomic,retain) NSURL * transferPath;              //@synthesize transferPath=_transferPath - In the implementation block
@property (assign,nonatomic) BOOL shouldCopy;                   //@synthesize shouldCopy=_shouldCopy - In the implementation block
@property (assign,nonatomic) BOOL tryDeltaCopy;                 //@synthesize tryDeltaCopy=_tryDeltaCopy - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)shouldCopy;
-(Class)clientPromiseClass;
-(void)setTransferPath:(NSURL *)arg1 ;
-(NSURL *)transferPath;
-(void)setShouldCopy:(BOOL)arg1 ;
-(BOOL)tryDeltaCopy;
-(void)setTryDeltaCopy:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


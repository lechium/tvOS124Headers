/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedInMemoryDataSeed;

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedInMemoryDataSeed * seed; 
+(BOOL)supportsSecureCoding;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 data:(id)arg3 ;
-(Class)seedClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

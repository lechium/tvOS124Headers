/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, RMCategory;

@interface RMWebDomain : NSManagedObject

@property (nonatomic,copy) NSString * domainName; 
@property (nonatomic,retain) RMCategory * category; 
+(id)createOrReturnWebDomainWithDomainName:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end


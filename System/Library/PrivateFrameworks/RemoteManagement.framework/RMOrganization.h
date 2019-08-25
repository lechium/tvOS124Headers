/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSString, NSSet, RMDeclarationTransactionRecord;

@interface RMOrganization : RMUniquedManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSSet * activations; 
@property (nonatomic,retain) NSSet * users; 
@property (nonatomic,retain) RMDeclarationTransactionRecord * currentDeclarationTransaction; 
+(id)fetchRequestForOrganizationsWithIdentifier:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(void)didChangeValueForKey:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IDSCKDatabase;

@interface IDSCKContainer : NSObject {

	NSString* _containerIdentifier;
	IDSCKDatabase* _privateCloudDatabase;
	IDSCKDatabase* _publicCloudDatabase;

}

@property (readonly) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * privateCloudDatabase;              //@synthesize privateCloudDatabase=_privateCloudDatabase - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * publicCloudDatabase;               //@synthesize publicCloudDatabase=_publicCloudDatabase - In the implementation block
+(id)containerWithIdentifier:(id)arg1 ;
+(Class)__class;
-(IDSCKDatabase *)publicCloudDatabase;
-(NSString *)containerIdentifier;
-(IDSCKDatabase *)privateCloudDatabase;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/GSLibraryProtocol.h>

@class NSString, GSTemporaryStorage;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {

	GSTemporaryStorage* _ts;

}

@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
-(NSString *)nameSpace;
-(NSObject*<GSAdditionStoring>)storage;
-(BOOL)generationsRemove:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
@end


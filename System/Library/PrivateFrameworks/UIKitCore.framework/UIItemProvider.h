/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <Foundation/NSItemProvider.h>

@class NSDictionary, NSString, NSDate, NSNumber;

@interface UIItemProvider : NSItemProvider {

	NSDictionary* _teamMetadata;

}

@property (nonatomic,copy) NSDictionary * teamMetadata;                  //@synthesize teamMetadata=_teamMetadata - In the implementation block
@property (assign,nonatomic) CGSize estimatedDisplayedSize; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSNumber * size; 
-(NSNumber *)size;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)canCreateObjectOfClass:(Class)arg1 ;
-(id)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerFileProviderItemForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 options:(id)arg3 loadHandler:(/*^block*/id)arg4 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)copyFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyFileRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 inPlace:(BOOL*)arg2 error:(id*)arg3 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)registerObject:(id)arg1 options:(id)arg2 ;
-(void)registerObjectOfClass:(Class)arg1 options:(id)arg2 loadHandler:(/*^block*/id)arg3 ;
-(BOOL)canInstantiateObjectOfClass:(Class)arg1 ;
-(id)createObjectOfClass:(Class)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)createObjectOfClass:(Class)arg1 error:(id*)arg2 ;
-(void)setEstimatedDisplayedSize:(CGSize)arg1 ;
-(CGSize)estimatedDisplayedSize;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(NSDictionary *)teamMetadata;
-(void)setTeamMetadata:(NSDictionary *)arg1 ;
@end


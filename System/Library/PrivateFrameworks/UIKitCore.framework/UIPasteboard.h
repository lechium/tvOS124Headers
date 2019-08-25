/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSURL, UIImage, UIColor;

@interface UIPasteboard : NSObject

@property (nonatomic,copy,readonly) NSArray * availableTypes; 
@property (nonatomic,readonly) NSString * name; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,copy) NSArray * itemProviders; 
@property (nonatomic,readonly) NSArray * pasteboardTypes; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSArray * strings; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSArray * URLs; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSArray * images; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,readonly) BOOL hasStrings; 
@property (nonatomic,readonly) BOOL hasURLs; 
@property (nonatomic,readonly) BOOL hasImages; 
@property (nonatomic,readonly) BOOL hasColors; 
+(id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)_pasteboardWithUniqueName;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
+(void)removePasteboardWithName:(id)arg1 ;
-(id)objectsForPasteboardType:(id)arg1 ;
-(void)pl_setAssets:(id)arg1 ;
-(void)pl_setAsset:(id)arg1 ;
-(id)pl_assetsInPhotoLibrary:(id)arg1 ;
-(BOOL)pl_containsAssets;
-(NSString *)string;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setColors:(NSArray *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSArray *)images;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)numberOfItems;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(long long)changeCount;
-(void)setString:(NSString *)arg1 ;
-(BOOL)hasStrings;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(NSArray *)pasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(void)addItems:(id)arg1 ;
-(void)setItems:(id)arg1 options:(id)arg2 ;
-(NSArray *)strings;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(void)setURLs:(NSArray *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)colors;
-(BOOL)hasURLs;
-(BOOL)hasImages;
-(BOOL)hasColors;
-(BOOL)_hasStrings;
-(void)setItemProviders:(NSArray *)arg1 ;
-(void)setItemProviders:(id)arg1 options:(id)arg2 ;
-(void)setItemProviders:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3 ;
-(void)setObjects:(id)arg1 options:(id)arg2 ;
-(void)setObjects:(id)arg1 ;
-(void)setObjects:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3 ;
-(NSArray *)availableTypes;
-(NSArray *)itemProviders;
-(id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1 ;
-(BOOL)canInstantiateObjectsOfClass:(Class)arg1 ;
@end

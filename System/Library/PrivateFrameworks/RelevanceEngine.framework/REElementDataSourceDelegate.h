/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REElementDataSourceDelegate <NSObject>
@optional
-(void)addElements:(id)arg1 toSection:(unsigned long long)arg2;
-(void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2;
-(BOOL)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2;

@required
-(id)elementOperationQueue;
-(void)invalidateElements;
-(void)addElements:(id)arg1 toSectionWithIdentifier:(id)arg2;
-(void)reloadElement:(id)arg1;
-(void)removeElementsWithIds:(id)arg1;
-(void)refreshElement:(id)arg1;
-(BOOL)hasElementWithId:(id)arg1 inSectionWithIdentifier:(id)arg2;
-(void)fetchElementWithIdentifierVisible:(id)arg1 withHandler:(/*^block*/id)arg2;

@end


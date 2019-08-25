/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDataSourceElement.h>

@class NSArray, IKHeaderElement, IKViewElement;

@interface IKSectionElement : IKDataSourceElement {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * items; 
@property (nonatomic,retain,readonly) IKViewElement * footer; 
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)unboundItemElements;
-(NSArray *)items;
-(IKHeaderElement *)header;
-(IKViewElement *)footer;
@end

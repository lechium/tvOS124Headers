/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, HBRawFolder;

@interface HBRawRootItem : NSObject {

	NSNumber* _itemOrderId;
	HBRawFolder* _parentFolder;

}

@property (nonatomic,retain) NSNumber * itemOrderId;                         //@synthesize itemOrderId=_itemOrderId - In the implementation block
@property (assign,nonatomic,__weak) HBRawFolder * parentFolder;              //@synthesize parentFolder=_parentFolder - In the implementation block
-(HBRawFolder *)parentFolder;
-(void)setParentFolder:(HBRawFolder *)arg1 ;
-(NSNumber *)itemOrderId;
-(void)setItemOrderId:(NSNumber *)arg1 ;
@end

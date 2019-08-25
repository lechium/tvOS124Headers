/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	BOOL _beginsFirstPage;
	BOOL _endsLastPage;

}

@property (assign,nonatomic) BOOL beginsFirstPage;              //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) BOOL endsLastPage;                 //@synthesize endsLastPage=_endsLastPage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)beginsFirstPage;
-(void)setBeginsFirstPage:(BOOL)arg1 ;
-(BOOL)endsLastPage;
-(void)setEndsLastPage:(BOOL)arg1 ;
@end


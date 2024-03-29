/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject {

	struct {
		unsigned sparse : 1;
		unsigned parsingUpdatedTree : 1;
		unsigned parsingReorderedSiblings : 1;
		unsigned parsingPartOfPrototype : 1;
	}  _parsingFlags;
	IKViewElementRegistry* _elementRegistry;
	IKViewElementStyleFactory* _styleFactory;

}

@property (assign,getter=isSparse,nonatomic) BOOL sparse; 
@property (nonatomic,retain) IKViewElementStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
+(BOOL)elementsForDocumentElement:(id)arg1 context:(id)arg2 ;
+(Class)elementClassByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
+(BOOL)isDependentByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
+(void)initialize;
-(IKViewElementStyleFactory *)styleFactory;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(Class)elementClassByTagName:(id)arg1 ;
-(id)elementForDOMElement:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
-(id)initWithElementRegistry:(id)arg1 ;
-(void)setSparse:(BOOL)arg1 ;
-(BOOL)isSparse;
@end


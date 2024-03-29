/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKWebViewContentProviderRegistry : NSObject {

	HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >* _contentProviderForMIMEType;
	HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> >* _pages;

}
-(Class)providerForMIMEType:(const String*)arg1 ;
-(void)registerProvider:(Class)arg1 forMIMEType:(const String*)arg2 ;
-(Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>*)_mimeTypesWithCustomContentProviders;
-(id)initWithConfiguration:(id)arg1 ;
-(void)addPage:(WebPageProxy*)arg1 ;
-(void)removePage:(WebPageProxy*)arg1 ;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSImageProxyFactory.h"

@class NSArray;

@interface TVHJSImageProxyFactory : IKJSObject <TVHJSImageProxyFactory>
{
    NSArray *_jsMediaEntities;	// 8 = 0x8
}

+ (id)createWithMediaEntities:(id)arg1;	// IMP=0x00000001000387dc
@property(copy, nonatomic) NSArray *jsMediaEntities; // @synthesize jsMediaEntities=_jsMediaEntities;
- (void).cxx_destruct;	// IMP=0x0000000100038ae4
@property(readonly, copy, nonatomic) NSArray *imageProxies;
- (id)initWithMediaEntities:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100038744
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000001000386bc

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class NSString, PRLikeness;

@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider>
{
    PRLikeness *_likeness;
}

@property(readonly, nonatomic) PRLikeness *likeness; // @synthesize likeness=_likeness;
- (void).cxx_destruct;
- (unsigned long long)_cnui_likenessType;
- (id)_cnui_likeness;
- (id)initWithPRLikeness:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSShare;

@interface MSInvitationResponse : NSObject
{
    MSShare *_invitation;
    _Bool _accept;
}

+ (id)responseWithInvitation:(id)arg1 accept:(_Bool)arg2;
@property(nonatomic) _Bool accept; // @synthesize accept=_accept;
@property(retain, nonatomic) MSShare *invitation; // @synthesize invitation=_invitation;
- (void).cxx_destruct;
- (id)initWithInvitation:(id)arg1 accept:(_Bool)arg2;

@end


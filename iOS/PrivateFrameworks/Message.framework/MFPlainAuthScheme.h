//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFAuthScheme.h>

@interface MFPlainAuthScheme : MFAuthScheme
{
}

- (id)humanReadableName;
- (id)name;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (Class)authenticatorClass;

@end


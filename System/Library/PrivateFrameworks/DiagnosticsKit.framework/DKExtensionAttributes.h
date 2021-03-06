/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSExtension, NSString;


@protocol DKExtensionAttributes
@property (nonatomic,readonly) NSExtension * extension; 
@property (getter=isHeadless,nonatomic,readonly) BOOL headless; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@required
-(id)initWithExtension:(id)arg1;
-(NSExtension *)extension;
-(NSString *)bundleIdentifier;
-(BOOL)isHeadless;

@end


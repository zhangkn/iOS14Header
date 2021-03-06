/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSArray, NSString;

@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding> {

	unsigned long long _supportedInterfaceOrientations;
	NSArray* _deviceFamilies;
	BOOL _requiresFullScreen;

}

@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,copy) NSArray * deviceFamilies;                                         //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (assign,nonatomic) BOOL requiresFullScreen;                                        //@synthesize requiresFullScreen=_requiresFullScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)init;
-(NSArray *)deviceFamilies;
-(void)setDeviceFamilies:(NSArray *)arg1 ;
-(BOOL)requiresFullScreen;
-(void)setRequiresFullScreen:(BOOL)arg1 ;
@end


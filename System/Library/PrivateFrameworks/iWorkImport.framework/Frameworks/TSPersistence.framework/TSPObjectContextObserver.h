/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPObjectContextObserver : NSObject {

	id _target;
	SEL _action;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
-(SEL)action;
-(id)init;
-(id)target;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end


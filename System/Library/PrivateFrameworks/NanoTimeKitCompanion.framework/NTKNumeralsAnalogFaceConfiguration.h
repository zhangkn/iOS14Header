/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKDevice;

@interface NTKNumeralsAnalogFaceConfiguration : NSObject {

	BOOL _areAllComplicationsOff;
	unsigned long long _faceColor;
	unsigned long long _colorSchemeUnits;
	unsigned long long _selectedStyle;
	long long _utilitySlot;
	CLKDevice* _device;

}

@property (nonatomic,readonly) unsigned long long faceColor;                     //@synthesize faceColor=_faceColor - In the implementation block
@property (nonatomic,readonly) unsigned long long colorSchemeUnits;              //@synthesize colorSchemeUnits=_colorSchemeUnits - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedStyle;                 //@synthesize selectedStyle=_selectedStyle - In the implementation block
@property (nonatomic,readonly) BOOL areAllComplicationsOff;                      //@synthesize areAllComplicationsOff=_areAllComplicationsOff - In the implementation block
@property (nonatomic,readonly) long long utilitySlot;                            //@synthesize utilitySlot=_utilitySlot - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                               //@synthesize device=_device - In the implementation block
-(CLKDevice *)device;
-(unsigned long long)faceColor;
-(unsigned long long)colorSchemeUnits;
-(id)initWithFaceColor:(unsigned long long)arg1 colorSchemeUnits:(unsigned long long)arg2 areAllComplicationsOff:(BOOL)arg3 utilitySlot:(long long)arg4 selectedStyle:(unsigned long long)arg5 forDevice:(id)arg6 ;
-(unsigned long long)selectedStyle;
-(BOOL)areAllComplicationsOff;
-(long long)utilitySlot;
@end


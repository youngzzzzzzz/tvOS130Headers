/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VNModelFile <NSObject>
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
@optional
-(NSString *)resourcePath;
-(void)setResourcePath:(id)arg1;

@required
-(unsigned long long)length;
-(const void*)baseAddress;
-(void)advise:(long long)arg1;

@end

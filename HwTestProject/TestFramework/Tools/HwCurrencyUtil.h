//
//  HwCurrencyUtil.h
//  HwTestProject
//
//  Created by 黄小刚 on 2017/7/5.
//  Copyright © 2017年 黄小刚. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HwCurrencyUtil : NSObject


/**
 *  配置测试用例的路径信息
 *
 *  @param pathDic  包含路径信息的可变字典
 *  @param basePath 父路径
 */
+ (void)fixTestCasePathDic:(NSMutableDictionary *)pathDic withPath:(NSString *)basePath;

/**
 *  配置测试用例的路径信息
 *
 *  @param pathDicArray 包含路径信息的字典
 *  @param basePath     父路径
 */
+ (void)fixTestCasePathDicArray:(NSMutableArray *)pathDicArray withPath:(NSString *)basePath;


@end

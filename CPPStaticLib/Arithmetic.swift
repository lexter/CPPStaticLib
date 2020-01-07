//
//  Arithmetic.swift
//  CPPStaticLib
//
//  Created by Lexter Labra on 1/7/20.
//  Copyright © 2020 Lexter Labra. All rights reserved.
//

import Foundation


// Reference: https://forums.swift.org/t/wrapping-c-callbacks-in-swift-closures/29047/3
// Fix to error: a C function pointer cannot be formed from a closure that captures context
public typealias Closure = @convention(c) (Double, Double) -> Double

public class Arithmetic {
    
    public static func Add(_ a: Double, _ b:Double) -> Double {
        return doAdd(a, b)
    }
    
    public static func Subtract(_ a: Double, _ b:Double) -> Double {
        return doSubtract(a, b)
    }
    
    public static func Multiply(_ a: Double, _ b:Double) -> Double {
        return doMultiply(a, b)
    }
    
    public static func Divide(_ a: Double, _ b:Double) -> Double {
        return doDivide(a, b)
    }
    
    public static func Custom(  _ a: Double,
                                _ b: Double,
                                _ callback: @escaping Closure
                             ) -> Double {
        return doCustom(a, b, callback)
    }
}

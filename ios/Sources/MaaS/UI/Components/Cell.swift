//
//  SwiftUIView.swift
//  
//
//  Created by Domas on 2020-10-01.
//

import SwiftUI

struct Cell<P: View, S: View, C: View>: View {

    let content: () -> C
    let prefix: () -> P?
    let suffix: () -> S?

    init(content: @escaping () -> C)
    where P == Never, S == Never {
        self.content = content
        self.prefix = { nil }
        self.suffix = { nil }
    }

    init(content: @escaping () -> C,
         prefix: @escaping () -> P?)
    where S == Never {
        self.content = content
        self.prefix = prefix
        self.suffix = { nil }
    }

    init(content: @escaping () -> C,
         suffix: @escaping () -> S?)
    where P == Never {
        self.content = content
        self.prefix = { nil }
        self.suffix = suffix
    }

    init(content: @escaping () -> C,
         prefix: @escaping () -> P?,
         suffix: @escaping () -> S?) {
        self.content = content
        self.prefix = prefix
        self.suffix = suffix
    }

    var body: some View {
        HStack {
            prefix()
            content()
            Spacer()
            suffix()
        }
        .padding()
    }
}

#if DEBUG
// TODO: Snapped doesn't work well with generics :(
struct Cell_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            Cell {
                Text("Hello")
            }

            Cell {
                Text("Hello")
            } prefix: {
                Text("Pre")
            }

            Cell {
                Text("Hello")
            } suffix: {
                Text("Suff")
            }

            Cell {
                Text("Hello")
            } prefix: {
                Text("Pre")
            } suffix: {
                Text("Suff")
            }
        }
        .previewLayout(.fixed(width: 320, height: 60))
    }
}
#endif

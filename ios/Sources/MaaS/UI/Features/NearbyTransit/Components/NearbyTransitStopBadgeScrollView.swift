import SwiftUI

struct NearbyTransitStopBadgeScrollView: View {

    let schedules: [Schedule]

    var body: some View {
        GradientBoundsScrollView(.horizontal, showIndicators: false) {
            HStack {
                ForEach(schedules.indices) {
                    fakeBadge(schedules[$0].name, color: schedules[$0].color.parseColor())
                }
            }
        }
    }

    #warning("To supah badgem")
    func fakeBadge(_ text: String, color: Color? = nil) -> some View {
        Text(text)
            .font(.caption)
            .fontWeight(.bold)
            .foregroundColor(.white)
            .padding(2)
            .fixedSize()
            .background(
                RoundedRectangle(cornerRadius: 4, style: .continuous)
                    .foregroundColor(color)
            )
    }
}
